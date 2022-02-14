
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct kqueue {int kq_knlistsize; int kq_state; scalar_t__ kq_knhashmask; struct klist* kq_knhash; struct klist* kq_knlist; } ;
struct klist {int dummy; } ;
struct filterops {scalar_t__ f_isfd; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;
 int FUNC_2 (struct kqueue*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct klist*,struct klist*,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct klist*,int ) ;
 struct klist* FUNC_6 (int ,int ,scalar_t__*,int ) ;
 struct klist* FUNC_7 (int,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct kqueue *VAR_9, struct filterops *VAR_10, uintptr_t VAR_11,
    int VAR_12)
{
 struct klist *VAR_13, *VAR_14, *VAR_15;
 u_long VAR_16;
 int VAR_17, VAR_18, VAR_19;

 FUNC_1(VAR_9);

 VAR_17 = 0;
 VAR_15 = ((void*)0);
 if (VAR_10->f_isfd) {
  VAR_18 = VAR_11;
  if (VAR_9->kq_knlistsize <= VAR_18) {
   VAR_19 = VAR_9->kq_knlistsize;
   while (VAR_19 <= VAR_18)
    VAR_19 += VAR_5;
   VAR_13 = FUNC_7(VAR_19 * sizeof(*VAR_13), VAR_7, VAR_12);
   if (VAR_13 == ((void*)0))
    return VAR_1;
   FUNC_0(VAR_9);
   if ((VAR_9->kq_state & VAR_6) != 0) {
    VAR_15 = VAR_13;
    VAR_17 = VAR_0;
   } else if (VAR_9->kq_knlistsize > VAR_18) {
    VAR_15 = VAR_13;
   } else {
    if (VAR_9->kq_knlist != ((void*)0)) {
     FUNC_3(VAR_9->kq_knlist, VAR_13,
         VAR_9->kq_knlistsize * sizeof(*VAR_13));
     VAR_15 = VAR_9->kq_knlist;
     VAR_9->kq_knlist = ((void*)0);
    }
    FUNC_4((caddr_t)VAR_13 +
        VAR_9->kq_knlistsize * sizeof(*VAR_13),
        (VAR_19 - VAR_9->kq_knlistsize) * sizeof(*VAR_13));
    VAR_9->kq_knlistsize = VAR_19;
    VAR_9->kq_knlist = VAR_13;
   }
   FUNC_2(VAR_9);
  }
 } else {
  if (VAR_9->kq_knhashmask == 0) {
   VAR_14 = FUNC_6(VAR_4, VAR_7,
       &VAR_16, (VAR_12 & VAR_8) != 0 ?
       VAR_3 : VAR_2);
   if (VAR_14 == ((void*)0))
    return (VAR_1);
   FUNC_0(VAR_9);
   if ((VAR_9->kq_state & VAR_6) != 0) {
    VAR_15 = VAR_14;
    VAR_17 = VAR_0;
   } else if (VAR_9->kq_knhashmask == 0) {
    VAR_9->kq_knhash = VAR_14;
    VAR_9->kq_knhashmask = VAR_16;
   } else {
    VAR_15 = VAR_14;
   }
   FUNC_2(VAR_9);
  }
 }
 FUNC_5(VAR_15, VAR_7);

 FUNC_1(VAR_9);
 return (VAR_17);
}
