
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int recmask; TYPE_1__* mix; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_6__ {unsigned int recording_devs; unsigned int (* select_input ) (TYPE_2__*,unsigned int,unsigned char*,unsigned char*) ;} ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (TYPE_2__*,unsigned int,unsigned char*,unsigned char*) ;
 int FUNC_2 (TYPE_2__*,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_3(wavnc_info *VAR_0, unsigned int VAR_1)
{
 unsigned char VAR_2, VAR_3;

 VAR_1 &= VAR_0->mix->recording_devs;





 if (FUNC_0(VAR_1) > 1)
  VAR_1 &= ~VAR_0->recmask;





 VAR_0->recmask = VAR_0->mix->select_input(VAR_0, VAR_1,
      &VAR_2, &VAR_3);

 FUNC_2(VAR_0, VAR_2, VAR_3);
}
