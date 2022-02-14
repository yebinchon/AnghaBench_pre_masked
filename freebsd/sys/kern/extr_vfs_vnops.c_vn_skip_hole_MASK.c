
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct vnode*,int ,scalar_t__*,int ,struct ucred*,int ) ;
 int VAR_2 ;

__attribute__((used)) static off_t
FUNC_3(struct vnode *VAR_3, off_t VAR_4, off_t *VAR_5, off_t *VAR_6,
    off_t *VAR_7, off_t *VAR_8, struct ucred *VAR_9)
{
 int VAR_10;
 off_t VAR_11;

 if (*VAR_8 == 0 || *VAR_8 <= *VAR_5) {
  *VAR_7 = *VAR_5;
  VAR_10 = FUNC_2(VAR_3, VAR_0, VAR_7, 0, VAR_9,
      VAR_2);
  if (VAR_10 == 0) {
   *VAR_8 = *VAR_7;
   VAR_10 = FUNC_2(VAR_3, VAR_1, VAR_8, 0, VAR_9,
       VAR_2);
  }
  if (VAR_10 != 0 || *VAR_8 == *VAR_7) {
   *VAR_8 = -1;
   return (VAR_4);
  }
  FUNC_0(*VAR_7 >= *VAR_5,
      ("vn_skip_hole: dataoff=%jd < outoff=%jd",
      (intmax_t)*VAR_7, (intmax_t)*VAR_5));
  FUNC_0(*VAR_8 > *VAR_7,
      ("vn_skip_hole: holeoff=%jd <= dataoff=%jd",
      (intmax_t)*VAR_8, (intmax_t)*VAR_7));
 }





 if (*VAR_7 > *VAR_5) {
  VAR_11 = *VAR_7 - *VAR_5;
  if (VAR_11 >= *VAR_6) {

   *VAR_5 += *VAR_6;
   *VAR_6 = 0;
   return (0);
  }
  *VAR_6 -= VAR_11;
  *VAR_5 += VAR_11;
  VAR_4 = FUNC_1(VAR_4, *VAR_6);
 }
 if (*VAR_8 > *VAR_5 && *VAR_8 < *VAR_5 + VAR_4)
  VAR_4 = *VAR_8 - *VAR_5;
 return (VAR_4);
}
