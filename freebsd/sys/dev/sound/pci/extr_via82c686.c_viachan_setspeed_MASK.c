
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct via_info {int codec_caps; int codec; } ;
struct via_chinfo {scalar_t__ dir; struct via_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_4, void *VAR_5, u_int32_t VAR_6)
{
 struct via_chinfo *VAR_7 = VAR_5;
 struct via_info *VAR_8 = VAR_7->parent;
 int VAR_9;
 if (VAR_8->codec_caps & VAR_0) {
  VAR_9 = (VAR_7->dir == VAR_3)? VAR_1 : VAR_2;
  return FUNC_0(VAR_8->codec, VAR_9, VAR_6);
 } else
  return 48000;
}
