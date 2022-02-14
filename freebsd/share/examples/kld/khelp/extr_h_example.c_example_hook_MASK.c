
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd {int dummy; } ;
struct example {int est_out_count; int est_in_count; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(int VAR_2, int VAR_3, void *VAR_4, void *VAR_5,
    void *VAR_6, struct osd *VAR_7)
{
 struct example *VAR_8;

 VAR_8 = VAR_6;

 if (VAR_3 == VAR_0)
  VAR_8->est_in_count++;
 else if (VAR_3 == VAR_1)
  VAR_8->est_out_count++;

 return (0);
}
