
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tv_sec; int tv_nsec; } ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
struct iattr {int ia_valid; int ia_mode; int ia_uid; int ia_gid; int ia_size; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __be32 *
FUNC_1(__be32 *VAR_8, struct iattr *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_9->ia_valid = 0;





 if ((VAR_10 = FUNC_0(*VAR_8++)) != (u32)-1 && VAR_10 != 0xffff) {
  VAR_9->ia_valid |= VAR_3;
  VAR_9->ia_mode = VAR_10;
 }
 if ((VAR_10 = FUNC_0(*VAR_8++)) != (u32)-1) {
  VAR_9->ia_valid |= VAR_7;
  VAR_9->ia_uid = VAR_10;
 }
 if ((VAR_10 = FUNC_0(*VAR_8++)) != (u32)-1) {
  VAR_9->ia_valid |= VAR_2;
  VAR_9->ia_gid = VAR_10;
 }
 if ((VAR_10 = FUNC_0(*VAR_8++)) != (u32)-1) {
  VAR_9->ia_valid |= VAR_6;
  VAR_9->ia_size = VAR_10;
 }
 VAR_10 = FUNC_0(*VAR_8++); VAR_11 = FUNC_0(*VAR_8++);
 if (VAR_10 != (u32)-1 && VAR_11 != (u32)-1) {
  VAR_9->ia_valid |= VAR_0 | VAR_1;
  VAR_9->ia_atime.tv_sec = VAR_10;
  VAR_9->ia_atime.tv_nsec = VAR_11 * 1000;
 }
 VAR_10 = FUNC_0(*VAR_8++); VAR_11 = FUNC_0(*VAR_8++);
 if (VAR_10 != (u32)-1 && VAR_11 != (u32)-1) {
  VAR_9->ia_valid |= VAR_4 | VAR_5;
  VAR_9->ia_mtime.tv_sec = VAR_10;
  VAR_9->ia_mtime.tv_nsec = VAR_11 * 1000;
  if (VAR_11 == 1000000)
   VAR_9->ia_valid &= ~(VAR_1|VAR_5);
 }
 return VAR_8;
}
