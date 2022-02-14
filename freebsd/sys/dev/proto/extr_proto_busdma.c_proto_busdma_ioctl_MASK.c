
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct proto_tag {int dummy; } ;
struct proto_softc {int sc_dev; } ;
struct proto_md {int dummy; } ;
struct TYPE_3__ {int tag; } ;
struct TYPE_4__ {TYPE_1__ md; } ;
struct proto_ioc_busdma {int request; int key; TYPE_2__ u; } ;
struct proto_busdma {int sxlck; int bd_roottag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct proto_busdma*,struct proto_tag*,struct proto_ioc_busdma*) ;
 int FUNC_2 (struct proto_busdma*,struct proto_md*) ;
 int FUNC_3 (struct proto_busdma*,struct proto_md*,struct proto_ioc_busdma*,struct thread*) ;
 struct proto_md* FUNC_4 (struct proto_busdma*,int ) ;
 int FUNC_5 (struct proto_busdma*,struct proto_md*) ;
 int FUNC_6 (struct proto_busdma*,struct proto_tag*,struct proto_ioc_busdma*) ;
 int FUNC_7 (struct proto_busdma*,struct proto_md*) ;
 int FUNC_8 (struct proto_busdma*,struct proto_md*,struct proto_ioc_busdma*) ;
 int FUNC_9 (struct proto_busdma*,struct proto_tag*,struct proto_ioc_busdma*) ;
 int FUNC_10 (struct proto_busdma*,struct proto_tag*) ;
 struct proto_tag* FUNC_11 (struct proto_busdma*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct proto_softc *VAR_1, struct proto_busdma *VAR_2,
    struct proto_ioc_busdma *VAR_3, struct thread *VAR_4)
{
 struct proto_tag *VAR_5;
 struct proto_md *VAR_6;
 int VAR_7;

 FUNC_12(&VAR_2->sxlck);

 VAR_7 = 0;
 switch (VAR_3->request) {
 case 130:
  VAR_2->bd_roottag = FUNC_0(VAR_1->sc_dev);
  VAR_7 = FUNC_9(VAR_2, ((void*)0), VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_11(VAR_2, VAR_3->key);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_9(VAR_2, VAR_5, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_11(VAR_2, VAR_3->key);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_10(VAR_2, VAR_5);
  break;
 case 133:
  VAR_5 = FUNC_11(VAR_2, VAR_3->u.md.tag);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_6(VAR_2, VAR_5, VAR_3);
  break;
 case 132:
  VAR_6 = FUNC_4(VAR_2, VAR_3->key);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_7(VAR_2, VAR_6);
  break;
 case 137:
  VAR_5 = FUNC_11(VAR_2, VAR_3->u.md.tag);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_3);
  break;
 case 136:
  VAR_6 = FUNC_4(VAR_2, VAR_3->key);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_2(VAR_2, VAR_6);
  break;
 case 135:
  VAR_6 = FUNC_4(VAR_2, VAR_3->key);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_3, VAR_4);
  break;
 case 134:
  VAR_6 = FUNC_4(VAR_2, VAR_3->key);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_5(VAR_2, VAR_6);
  break;
 case 131:
  VAR_6 = FUNC_4(VAR_2, VAR_3->key);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_8(VAR_2, VAR_6, VAR_3);
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }

 FUNC_13(&VAR_2->sxlck);

 return (VAR_7);
}
