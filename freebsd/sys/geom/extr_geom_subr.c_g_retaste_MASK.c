
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_hh00 {int post; int error; struct g_class* mp; } ;
struct g_class {int * taste; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct g_hh00*) ;
 struct g_hh00* FUNC_1 (int,int) ;
 int FUNC_2 (int ,struct g_hh00*,int,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct g_hh00*,int,int *) ;

int
FUNC_4(struct g_class *VAR_5)
{
 struct g_hh00 *VAR_6;
 int VAR_7;

 if (VAR_5->taste == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_1(sizeof *VAR_6, VAR_1 | VAR_2);
 VAR_6->mp = VAR_5;

 if (VAR_3) {
  VAR_6->post = 1;
  VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_1, ((void*)0));
 } else {
  VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_1, ((void*)0));
  if (VAR_7 == 0)
   VAR_7 = VAR_6->error;
  FUNC_0(VAR_6);
 }

 return (VAR_7);
}
