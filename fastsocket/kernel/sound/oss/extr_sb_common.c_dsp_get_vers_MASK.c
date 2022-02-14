
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int major; int minor; int lock; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(sb_devc * VAR_2)
{
 int VAR_3;

 unsigned long VAR_4;

 FUNC_0(FUNC_2("Entered dsp_get_vers()\n"));
 FUNC_4(&VAR_2->lock, VAR_4);
 VAR_2->major = VAR_2->minor = 0;
 FUNC_3(VAR_2, 0xe1);

 for (VAR_3 = 100000; VAR_3; VAR_3--)
 {
  if (FUNC_1(VAR_0) & 0x80)
  {
   if (VAR_2->major == 0)
    VAR_2->major = FUNC_1(VAR_1);
   else
   {
    VAR_2->minor = FUNC_1(VAR_1);
    break;
   }
  }
 }
 FUNC_5(&VAR_2->lock, VAR_4);
 FUNC_0(FUNC_2("DSP version %d.%02d\n", VAR_2->major, VAR_2->minor));
}
