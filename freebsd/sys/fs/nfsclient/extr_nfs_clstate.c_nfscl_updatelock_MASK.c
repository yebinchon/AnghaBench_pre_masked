
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct nfscllockowner {int nfsl_lock; } ;
struct nfscllock {scalar_t__ nfslo_type; scalar_t__ nfslo_end; scalar_t__ nfslo_first; } ;


 scalar_t__ VAR_0 ;
 struct nfscllock* FUNC_0 (int *) ;
 struct nfscllock* FUNC_1 (struct nfscllock*,int ) ;
 int FUNC_2 (struct nfscllock*,int) ;
 int FUNC_3 (struct nfscllockowner*,struct nfscllock*,struct nfscllock*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct nfscllockowner *VAR_2, struct nfscllock **VAR_3,
    struct nfscllock **VAR_4, int VAR_5)
{
 struct nfscllock *VAR_6 = *VAR_3;
 struct nfscllock *VAR_7, *VAR_8, *VAR_9;
 struct nfscllock *VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 u_int64_t VAR_13;




 if (VAR_6->nfslo_type == VAR_0)
  VAR_11 = 1;
 VAR_9 = (struct nfscllock *)VAR_2;
 VAR_7 = FUNC_0(&VAR_2->nfsl_lock);
 while (VAR_7 != ((void*)0)) {




     if (VAR_7->nfslo_end >= VAR_6->nfslo_first) {
  if (VAR_6->nfslo_end < VAR_7->nfslo_first) {





      break;
  }
  if (VAR_6->nfslo_type == VAR_7->nfslo_type ||
      (VAR_6->nfslo_first <= VAR_7->nfslo_first &&
       VAR_6->nfslo_end >= VAR_7->nfslo_end)) {







      if (VAR_6->nfslo_type != VAR_7->nfslo_type ||
   VAR_6->nfslo_first != VAR_7->nfslo_first ||
   VAR_6->nfslo_end != VAR_7->nfslo_end)
   VAR_12 = 1;
      if (VAR_7->nfslo_first < VAR_6->nfslo_first)
   VAR_6->nfslo_first = VAR_7->nfslo_first;
      if (VAR_7->nfslo_end > VAR_6->nfslo_end)
   VAR_6->nfslo_end = VAR_7->nfslo_end;
      VAR_8 = VAR_7;
      VAR_7 = FUNC_1(VAR_7, VAR_1);
      FUNC_2(VAR_8, VAR_5);
      continue;
  }





  if (VAR_6->nfslo_first <= VAR_7->nfslo_first) {







      if (VAR_7->nfslo_first != VAR_6->nfslo_end) {
   VAR_7->nfslo_first = VAR_6->nfslo_end;
   VAR_12 = 1;
      }
      break;
  }
  if (VAR_6->nfslo_end >= VAR_7->nfslo_end) {
      if (VAR_7->nfslo_end != VAR_6->nfslo_first) {
   VAR_7->nfslo_end = VAR_6->nfslo_first;
   VAR_12 = 1;
      }
      VAR_9 = VAR_7;
      VAR_7 = FUNC_1(VAR_7, VAR_1);
      continue;
  }
  VAR_13 = VAR_6->nfslo_first;
  if (VAR_11) {
      VAR_10 = VAR_6;
      *VAR_3 = ((void*)0);
  } else {
      VAR_10 = *VAR_4;
      *VAR_4 = ((void*)0);
  }
  VAR_10->nfslo_first = VAR_6->nfslo_end;
  VAR_10->nfslo_end = VAR_7->nfslo_end;
  VAR_10->nfslo_type = VAR_7->nfslo_type;
  VAR_7->nfslo_end = VAR_13;
  FUNC_3(VAR_2, VAR_10, VAR_7, VAR_5);
  VAR_9 = VAR_7;
  VAR_12 = 1;
  break;
     }
     VAR_9 = VAR_7;
     VAR_7 = FUNC_1(VAR_7, VAR_1);
     if (VAR_7 == ((void*)0))
  break;
 }




 if (!VAR_11) {
  FUNC_3(VAR_2, VAR_6, VAR_9, VAR_5);
  *VAR_3 = ((void*)0);
  VAR_12 = 1;
 }
 return (VAR_12);
}
