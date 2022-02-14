
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct nfsstate {int ls_lock; } ;
struct nfslockfile {int lf_locallock; } ;
struct nfslock {int lo_flags; scalar_t__ lo_end; scalar_t__ lo_first; struct nfslockfile* lo_lfp; struct nfsstate* lo_stp; } ;


 struct nfslock* FUNC_0 (int *) ;
 struct nfslock* FUNC_1 (struct nfslock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nfslock*) ;
 int FUNC_3 (struct nfslock*,struct nfslock*,struct nfsstate*,struct nfslockfile*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct nfsstate *VAR_2, struct nfslock **VAR_3,
    struct nfslock **VAR_4, struct nfslockfile *VAR_5)
{
 struct nfslock *VAR_6 = *VAR_3;
 struct nfslock *VAR_7, *VAR_8, *VAR_9;
 struct nfslock *VAR_10 = *VAR_4;
 int VAR_11 = 0, VAR_12 = 0;
 u_int64_t VAR_13;




 if (VAR_6->lo_flags & VAR_0)
  VAR_11 = 1;
 if (VAR_2 != ((void*)0)) {
  VAR_9 = (struct nfslock *)VAR_2;
  VAR_7 = FUNC_0(&VAR_2->ls_lock);
 } else {
  VAR_9 = (struct nfslock *)VAR_5;
  VAR_7 = FUNC_0(&VAR_5->lf_locallock);
 }
 while (VAR_7 != ((void*)0)) {




     if (VAR_7->lo_lfp == VAR_5) {
       VAR_12 = 1;
       if (VAR_7->lo_end >= VAR_6->lo_first) {
  if (VAR_6->lo_end < VAR_7->lo_first) {





   break;
  }
  if (VAR_6->lo_flags == VAR_7->lo_flags ||
      (VAR_6->lo_first <= VAR_7->lo_first &&
       VAR_6->lo_end >= VAR_7->lo_end)) {







   if (VAR_7->lo_first < VAR_6->lo_first)
    VAR_6->lo_first = VAR_7->lo_first;
   if (VAR_7->lo_end > VAR_6->lo_end)
    VAR_6->lo_end = VAR_7->lo_end;
   VAR_8 = VAR_7;
   VAR_7 = FUNC_1(VAR_7, VAR_1);
   FUNC_2(VAR_8);
   continue;
  }





  if (VAR_6->lo_first <= VAR_7->lo_first) {







   VAR_7->lo_first = VAR_6->lo_end;
   break;
  }
  if (VAR_6->lo_end >= VAR_7->lo_end) {
   VAR_7->lo_end = VAR_6->lo_first;
   VAR_9 = VAR_7;
   VAR_7 = FUNC_1(VAR_7, VAR_1);
   continue;
  }
  VAR_13 = VAR_6->lo_first;
  if (VAR_10 == ((void*)0)) {
   if (!VAR_11)
    FUNC_4("nfsd srv update unlock");
   VAR_10 = VAR_6;
   *VAR_3 = ((void*)0);
  }
  VAR_10->lo_first = VAR_6->lo_end;
  VAR_10->lo_end = VAR_7->lo_end;
  VAR_10->lo_flags = VAR_7->lo_flags;
  VAR_10->lo_stp = VAR_2;
  VAR_10->lo_lfp = VAR_5;
  VAR_7->lo_end = VAR_13;
  FUNC_3(VAR_10, VAR_7, VAR_2, VAR_5);
  *VAR_4 = ((void*)0);
  VAR_9 = VAR_7;
  break;
       }
     }
     VAR_9 = VAR_7;
     VAR_7 = FUNC_1(VAR_7, VAR_1);
     if (VAR_12 && (VAR_7 == ((void*)0) || VAR_7->lo_lfp != VAR_5))
  break;
 }




 if (!VAR_11) {
  FUNC_3(VAR_6, VAR_9, VAR_2, VAR_5);
  *VAR_3 = ((void*)0);
 }
}
