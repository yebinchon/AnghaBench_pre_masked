
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_6__ {int flag; } ;
struct TYPE_4__ {TYPE_3__ cref; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct uni_all {int mtype; TYPE_2__ u; } ;
struct uni {int glob_respond; int glob_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uni_all*) ;



 int FUNC_1 (struct uni*,int ,int,char*,int) ;
 int FUNC_2 (struct uni*,int ,int ,struct uni_msg*,struct uni_all*) ;
 int FUNC_3 (struct uni*,int ,int ,struct uni_msg*,struct uni_all*) ;
 int FUNC_4 (struct uni_msg*) ;
 int FUNC_5 (struct uni*,TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct uni *VAR_6, struct uni_msg *VAR_7, struct uni_all *VAR_8)
{
 FUNC_1(VAR_6, VAR_5, 2, "GLOB MTYPE = %x", VAR_8->mtype);

 switch (VAR_8->mtype) {

   default:





  FUNC_5(VAR_6, &VAR_8->u.hdr.cref,
      VAR_8->u.hdr.cref.flag ? VAR_6->glob_start : VAR_6->glob_respond,
      VAR_4);
  break;

   case 130:
  if (VAR_8->u.hdr.cref.flag) {



   FUNC_5(VAR_6, &VAR_8->u.hdr.cref,
       VAR_6->glob_start, VAR_4);
   break;
  }
  FUNC_2(VAR_6, VAR_0, 0, VAR_7, VAR_8);
  return;

   case 129:
  if (!VAR_8->u.hdr.cref.flag) {






   FUNC_5(VAR_6, &VAR_8->u.hdr.cref,
       VAR_6->glob_respond, VAR_4);
   break;
  }
  FUNC_3(VAR_6, VAR_2, 0, VAR_7, VAR_8);
  return;

   case 128:
  if (VAR_8->u.hdr.cref.flag)
   FUNC_3(VAR_6, VAR_3, 0, VAR_7, VAR_8);
  else
   FUNC_2(VAR_6, VAR_1, 0, VAR_7, VAR_8);
  return;
 }
 FUNC_4(VAR_7);
 FUNC_0(VAR_8);
}
