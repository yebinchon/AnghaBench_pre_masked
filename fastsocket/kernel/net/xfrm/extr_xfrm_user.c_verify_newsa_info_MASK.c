
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;
struct xfrm_usersa_info {int family; int mode; TYPE_1__ id; } ;
struct nlattr {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;





 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;




 int FUNC_0 (struct nlattr**) ;
 int FUNC_1 (struct nlattr**) ;
 int FUNC_2 (struct nlattr**,size_t) ;
 int FUNC_3 (struct nlattr**) ;

__attribute__((used)) static int FUNC_4(struct xfrm_usersa_info *VAR_10,
        struct nlattr **VAR_11)
{
 int VAR_12;

 VAR_12 = -VAR_1;
 switch (VAR_10->family) {
 case 138:
  break;

 case 137:



  VAR_12 = -VAR_0;
  goto out;


 default:
  goto out;
 }

 VAR_12 = -VAR_1;
 switch (VAR_10->id.proto) {
 case 136:
  if ((!VAR_11[VAR_3] &&
       !VAR_11[VAR_4]) ||
      VAR_11[VAR_2] ||
      VAR_11[VAR_6] ||
      VAR_11[VAR_5])
   goto out;
  break;

 case 133:
  if (VAR_11[VAR_5])
   goto out;
  if (!VAR_11[VAR_3] &&
      !VAR_11[VAR_4] &&
      !VAR_11[VAR_6] &&
      !VAR_11[VAR_2])
   goto out;
  if ((VAR_11[VAR_3] ||
       VAR_11[VAR_4] ||
       VAR_11[VAR_6]) &&
      VAR_11[VAR_2])
   goto out;
  break;

 case 135:
  if (!VAR_11[VAR_5] ||
      VAR_11[VAR_2] ||
      VAR_11[VAR_3] ||
      VAR_11[VAR_4] ||
      VAR_11[VAR_6])
   goto out;
  break;
 default:
  goto out;
 }

 if ((VAR_12 = FUNC_0(VAR_11)))
  goto out;
 if ((VAR_12 = FUNC_1(VAR_11)))
  goto out;
 if ((VAR_12 = FUNC_2(VAR_11, VAR_3)))
  goto out;
 if ((VAR_12 = FUNC_2(VAR_11, VAR_6)))
  goto out;
 if ((VAR_12 = FUNC_2(VAR_11, VAR_5)))
  goto out;
 if ((VAR_12 = FUNC_3(VAR_11)))
  goto out;

 VAR_12 = -VAR_1;
 switch (VAR_10->mode) {
 case 129:
 case 128:
 case 130:
 case 131:
  break;

 default:
  goto out;
 }

 VAR_12 = 0;

out:
 return VAR_12;
}
