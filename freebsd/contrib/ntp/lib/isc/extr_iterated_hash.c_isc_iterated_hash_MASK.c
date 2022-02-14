
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_sha1_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;

int
FUNC_3(unsigned char VAR_1[VAR_0],
    unsigned int VAR_2, int VAR_3,
    const unsigned char *VAR_4, int VAR_5,
    const unsigned char *VAR_6, int VAR_7)
{
 isc_sha1_t VAR_8;
 int VAR_9 = 0;

 if (VAR_2 != 1)
  return (0);

 do {
  FUNC_1(&VAR_8);
  FUNC_2(&VAR_8, VAR_6, VAR_7);
  FUNC_2(&VAR_8, VAR_4, VAR_5);
  FUNC_0(&VAR_8, VAR_1);
  VAR_6 = VAR_1;
  VAR_7 = VAR_0;
 } while (VAR_9++ < VAR_3);

 return (VAR_0);
}
