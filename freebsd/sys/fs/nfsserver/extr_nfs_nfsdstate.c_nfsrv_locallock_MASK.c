
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef scalar_t__ uint64_t ;
struct nfslockfile {int lf_locallock; } ;
struct nfslockconflict {int dummy; } ;
struct nfslock {scalar_t__ lo_end; scalar_t__ lo_first; int lo_flags; } ;
typedef int NFSPROC_T ;


 struct nfslock* FUNC_0 (int *) ;
 struct nfslock* FUNC_1 (struct nfslock*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,struct nfslockfile*,int,int ,scalar_t__,scalar_t__,struct nfslockconflict*,int *) ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_2, struct nfslockfile *VAR_3, int VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, struct nfslockconflict *VAR_7, NFSPROC_T *VAR_8)
{
 struct nfslock *VAR_9, *VAR_10;
 int VAR_11 = 0;


 VAR_9 = FUNC_0(&VAR_3->lf_locallock);
 while (VAR_5 < VAR_6 && VAR_9 != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_9, VAR_1);
  if (VAR_5 >= VAR_9->lo_end) {

   VAR_9 = VAR_10;
  } else if (VAR_5 < VAR_9->lo_first) {

   if (VAR_6 <= VAR_9->lo_first) {

    VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
        VAR_0, VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_11 != 0)
     break;
    VAR_5 = VAR_6;
   } else {

    VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
        VAR_0, VAR_5, VAR_9->lo_first, VAR_7,
        VAR_8);
    if (VAR_11 != 0)
     break;
    VAR_5 = VAR_9->lo_first;
   }
  } else {

   if (VAR_6 <= VAR_9->lo_end) {

    VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
        VAR_9->lo_flags, VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_11 != 0)
     break;
    VAR_5 = VAR_6;
   } else {

    VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
        VAR_9->lo_flags, VAR_5, VAR_9->lo_end, VAR_7, VAR_8);
    if (VAR_11 != 0)
     break;
    VAR_5 = VAR_9->lo_end;
    VAR_9 = VAR_10;
   }
  }
 }
 if (VAR_5 < VAR_6 && VAR_11 == 0)

  VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5,
      VAR_6, VAR_7, VAR_8);

 FUNC_2(VAR_11);
 return (VAR_11);
}
