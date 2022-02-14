
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* vm_pindex_t ;
struct md_s {int type; int mediasize; int flags; int pp; TYPE_1__* object; int cred; } ;
struct md_req {int md_mediasize; int md_options; } ;
struct TYPE_6__ {void* size; void* charge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*) ;

 int VAR_3 ;


 void* FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,void*,void*) ;
 int FUNC_9 (TYPE_1__*,void*,void*) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (TYPE_1__*,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_13(struct md_s *VAR_5, struct md_req *VAR_6)
{
 int VAR_7, VAR_8;
 vm_pindex_t VAR_9, VAR_10;

 switch (VAR_5->type) {
 case 128:
 case 130:
  break;
 case 129:
  if (VAR_6->md_mediasize <= 0 ||
      (VAR_6->md_mediasize % VAR_4) != 0)
   return (VAR_0);
  VAR_9 = FUNC_1(FUNC_7(VAR_5->mediasize));
  VAR_10 = FUNC_1(FUNC_7(VAR_6->md_mediasize));
  if (VAR_10 < VAR_9) {
   FUNC_2(VAR_5->object);
   FUNC_12(VAR_5->object, VAR_10, 0, 0);
   FUNC_8(VAR_5->object, VAR_10,
       VAR_9 - VAR_10);
   FUNC_10(FUNC_0(VAR_9 -
       VAR_10), VAR_5->cred);
   VAR_5->object->charge = FUNC_0(VAR_10);
   VAR_5->object->size = VAR_10;
   FUNC_3(VAR_5->object);
  } else if (VAR_10 > VAR_9) {
   VAR_8 = FUNC_11(FUNC_0(VAR_10 -
       VAR_9), VAR_5->cred);
   if (!VAR_8)
    return (VAR_1);
   if ((VAR_6->md_options & VAR_3) ||
       (VAR_5->flags & VAR_3)) {
    VAR_7 = FUNC_9(VAR_5->object,
        VAR_9, VAR_10 - VAR_9);
    if (VAR_7 < 0) {
     FUNC_10(
         FUNC_0(VAR_10 - VAR_9),
         VAR_5->cred);
     return (VAR_0);
    }
   }
   FUNC_2(VAR_5->object);
   VAR_5->object->charge = FUNC_0(VAR_10);
   VAR_5->object->size = VAR_10;
   FUNC_3(VAR_5->object);
  }
  break;
 default:
  return (VAR_2);
 }

 VAR_5->mediasize = VAR_6->md_mediasize;
 FUNC_5();
 FUNC_4(VAR_5->pp, VAR_5->mediasize);
 FUNC_6();
 return (0);
}
