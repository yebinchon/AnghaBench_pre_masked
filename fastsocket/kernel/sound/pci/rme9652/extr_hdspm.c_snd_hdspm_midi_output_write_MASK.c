
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm_midi {int lock; int id; int hdspm; scalar_t__ output; } ;
typedef int buf ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned char) ;
 int FUNC_2 (scalar_t__,unsigned char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6 (struct hdspm_midi *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;
 int VAR_3;
 int VAR_4;
 unsigned char VAR_5[128];



 FUNC_4 (&VAR_0->lock, VAR_1);
 if (VAR_0->output &&
     !FUNC_3 (VAR_0->output)) {
  VAR_2 = FUNC_0 (VAR_0->hdspm,
           VAR_0->id);
  if (VAR_2 > 0) {
   if (VAR_2 > (int)sizeof (VAR_5))
    VAR_2 = sizeof (VAR_5);

   VAR_3 = FUNC_2 (VAR_0->output, VAR_5,
        VAR_2);
   if (VAR_3 > 0) {
    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
     FUNC_1 (VAR_0->hdspm,
           VAR_0->id,
           VAR_5[VAR_4]);
   }
  }
 }
 FUNC_5 (&VAR_0->lock, VAR_1);
 return 0;
}
