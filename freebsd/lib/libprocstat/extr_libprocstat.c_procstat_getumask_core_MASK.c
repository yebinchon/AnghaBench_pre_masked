
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short*) ;
 unsigned short* FUNC_1 (struct procstat_core*,int ,int *,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct procstat_core *VAR_1, unsigned short *VAR_2)
{
 size_t VAR_3;
 unsigned short *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0, ((void*)0), &VAR_3);
 if (VAR_4 == ((void*)0))
  return (-1);
 if (VAR_3 < sizeof(*VAR_2)) {
  FUNC_0(VAR_4);
  return (-1);
 }
 *VAR_2 = *VAR_4;
 FUNC_0(VAR_4);
 return (0);
}
