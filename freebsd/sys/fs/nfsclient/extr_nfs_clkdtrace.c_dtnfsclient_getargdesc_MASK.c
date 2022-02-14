
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ dtrace_id_t ;
struct TYPE_3__ {int dtargd_ndx; int dtargd_native; } ;
typedef TYPE_1__ dtrace_argdesc_t ;


 void* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_9, dtrace_id_t VAR_10, void *VAR_11,
    dtrace_argdesc_t *VAR_12)
{
 const char *VAR_13 = ((void*)0);

 if (VAR_10 == VAR_1 ||
     VAR_10 == VAR_5 ||
     VAR_10 == VAR_7) {
  switch (VAR_12->dtargd_ndx) {
  case 0:
   VAR_13 = "struct vnode *";
   break;
  default:
   VAR_12->dtargd_ndx = VAR_0;
   break;
  }
 } else if (VAR_10 == VAR_2 ||
     VAR_10 == VAR_3) {
  switch (VAR_12->dtargd_ndx) {
  case 0:
   VAR_13 = "struct vnode *";
   break;
  case 1:
   VAR_13 = "uid_t";
   break;
  case 2:
   VAR_13 = "uint32_t";
   break;
  default:
   VAR_12->dtargd_ndx = VAR_0;
   break;
  }
 } else if (VAR_10 == VAR_4) {
  switch (VAR_12->dtargd_ndx) {
  case 0:
   VAR_13 = "struct vnode *";
   break;
  case 1:
   VAR_13 = "uid_t";
   break;
  case 2:
   VAR_13 = "uint32_t";
   break;
  case 3:
   VAR_13 = "int";
   break;
  default:
   VAR_12->dtargd_ndx = VAR_0;
   break;
  }
 } else if (VAR_10 == VAR_6) {
  switch (VAR_12->dtargd_ndx) {
  case 0:
   VAR_13 = "struct vnode *";
   break;
  case 1:
   VAR_13 = "struct vattr *";
   break;
  default:
   VAR_12->dtargd_ndx = VAR_0;
   break;
  }
 } else if (VAR_10 == VAR_8) {
  switch (VAR_12->dtargd_ndx) {
  case 0:
   VAR_13 = "struct vnode *";
   break;
  case 1:
   VAR_13 = "struct vattr *";
   break;
  case 2:
   VAR_13 = "int";
   break;
  default:
   VAR_12->dtargd_ndx = VAR_0;
   break;
  }
 } else {
  switch (VAR_12->dtargd_ndx) {
  case 0:
   VAR_13 = "struct vnode *";
   break;
  case 1:
   VAR_13 = "struct mbuf *";
   break;
  case 2:
   VAR_13 = "struct ucred *";
   break;
  case 3:
   VAR_13 = "int";
   break;
  case 4:
   if (FUNC_0(VAR_10)) {
    VAR_13 = "int";
    break;
   }

  default:
   VAR_12->dtargd_ndx = VAR_0;
   break;
  }
 }
 if (VAR_13 != ((void*)0))
  FUNC_1(VAR_12->dtargd_native, VAR_13, sizeof(VAR_12->dtargd_native));
}
