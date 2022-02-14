
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sldns_buffer {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_4 (struct sldns_buffer*,scalar_t__) ;
 int FUNC_5 (struct sldns_buffer*) ;
 scalar_t__ FUNC_6 (struct sldns_buffer*) ;

__attribute__((used)) static int
FUNC_7(struct sldns_buffer* VAR_2, int VAR_3)
{
 size_t VAR_4;
 if(FUNC_6(VAR_2) < VAR_0)
  return 1;

 if(FUNC_2(FUNC_5(VAR_2)) != VAR_1)
  return 0;

 if(FUNC_1(FUNC_5(VAR_2)) != 1 ||
  FUNC_0(FUNC_5(VAR_2)) == 0)
  return 0;

 VAR_4 = FUNC_3(FUNC_4(VAR_2, VAR_0),
  FUNC_6(VAR_2)-VAR_0);
 if(VAR_4 == 0)
  return 0;
 if(VAR_4 == 1 && VAR_3 == 0)
  return 0;

 if(FUNC_6(VAR_2) < VAR_0 + VAR_4 + 4 + 3)
  return 0;



 if(FUNC_4(VAR_2, VAR_0+VAR_4+4)[0] == 0 &&
    FUNC_4(VAR_2, VAR_0+VAR_4+4)[1] == 0 &&
    FUNC_4(VAR_2, VAR_0+VAR_4+4)[2] == 0)
  return 1;
 return 0;
}
