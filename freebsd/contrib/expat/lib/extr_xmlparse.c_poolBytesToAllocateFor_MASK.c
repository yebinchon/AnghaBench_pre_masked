
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XML_Char ;


 int VAR_0 ;
 size_t const VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_1(int VAR_3)
{







  const size_t VAR_4 = sizeof(XML_Char);

  if (VAR_3 <= 0)
    return 0;

  if (VAR_3 > (int)(VAR_1 / VAR_4))
    return 0;

  {
    const int VAR_5 = VAR_3 * (int)VAR_4;
    const int VAR_6 = (int)(
        FUNC_0(VAR_0, VAR_2) + (unsigned)VAR_5);
    if (VAR_6 < 0)
      return 0;

    return (size_t)VAR_6;
  }
}
