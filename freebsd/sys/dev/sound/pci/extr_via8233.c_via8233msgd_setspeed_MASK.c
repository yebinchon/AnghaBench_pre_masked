
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {int codec_caps; int codec; } ;
struct via_chinfo {struct via_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_1(kobj_t VAR_2, void *VAR_3, uint32_t VAR_4)
{
 struct via_chinfo *VAR_5 = VAR_3;
 struct via_info *VAR_6 = VAR_5->parent;

 if (VAR_6->codec_caps & VAR_0)
  return (FUNC_0(VAR_6->codec, VAR_1, VAR_4));

 return (48000);
}
