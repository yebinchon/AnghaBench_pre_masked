
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* outputc ) (int,unsigned char) ;} ;


 TYPE_1__** VAR_0 ;
 unsigned char* VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,unsigned char) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 3200; VAR_4++)
  if (VAR_0[VAR_2]->outputc(VAR_2, (unsigned char) (VAR_3 & 0xff)))
    {
     if (VAR_3 & 0x80)


      VAR_1[VAR_2] =
          (unsigned char) (VAR_3 & 0xff);


     return;


    }



 FUNC_0("Midi send timed out\n");
}
