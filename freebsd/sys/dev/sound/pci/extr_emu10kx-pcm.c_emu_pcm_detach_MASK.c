
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_pcm_info {scalar_t__ lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct emu_pcm_info*) ;
 int FUNC_1 (struct emu_pcm_info*,int ) ;
 struct emu_pcm_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 int VAR_2;
 struct emu_pcm_info *VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2) return (VAR_2);

 FUNC_0(VAR_3);

 if (VAR_3->lock)
  FUNC_4(VAR_3->lock);
 FUNC_1(VAR_3, VAR_0);

 return (0);
}
