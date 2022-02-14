
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_mode; int va_uid; int va_gid; int va_nodeid; int va_rdev; int va_type; scalar_t__ va_mask; } ;
typedef TYPE_1__ vattr_t ;
typedef scalar_t__ uint_t ;
typedef int uint64_t ;
typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(vattr_t *VAR_5, uint64_t VAR_6, uint64_t VAR_7,
    uint64_t VAR_8, uint64_t VAR_9, uint64_t VAR_10, uint64_t VAR_11)
{
 FUNC_2(VAR_5);
 VAR_5->va_mask = (uint_t)VAR_6;
 if (VAR_6 & VAR_2)
  VAR_5->va_type = FUNC_0(VAR_7);
 if (VAR_6 & VAR_1)
  VAR_5->va_mode = VAR_7 & VAR_4;
 if (VAR_6 & VAR_3)
  VAR_5->va_uid = (uid_t)(FUNC_1(VAR_8)) ? -1 : VAR_8;
 if (VAR_6 & VAR_0)
  VAR_5->va_gid = (gid_t)(FUNC_1(VAR_9)) ? -1 : VAR_9;
 VAR_5->va_rdev = FUNC_3(VAR_10);
 VAR_5->va_nodeid = VAR_11;
}
