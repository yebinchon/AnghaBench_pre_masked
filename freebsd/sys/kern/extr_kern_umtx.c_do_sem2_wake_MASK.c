
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umtx_key {int dummy; } ;
struct thread {int dummy; } ;
struct _usem2 {int _count; int _flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int*,int) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (struct _usem2*,int ,int ,struct umtx_key*) ;
 int FUNC_4 (struct umtx_key*) ;
 int FUNC_5 (struct umtx_key*) ;
 int FUNC_6 (struct thread*,int) ;
 int FUNC_7 (struct umtx_key*) ;
 int FUNC_8 (struct umtx_key*) ;
 int FUNC_9 (struct umtx_key*,int) ;
 int FUNC_10 (struct umtx_key*) ;
 int FUNC_11 (struct umtx_key*) ;

__attribute__((used)) static int
FUNC_12(struct thread *VAR_3, struct _usem2 *VAR_4)
{
 struct umtx_key VAR_5;
 int VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_8 = FUNC_2(&VAR_4->_flags, &VAR_10);
 if (VAR_8 == -1)
  return (VAR_0);
 if ((VAR_6 = FUNC_3(VAR_4, VAR_1, FUNC_0(VAR_10), &VAR_5)) != 0)
  return (VAR_6);
 FUNC_8(&VAR_5);
 FUNC_5(&VAR_5);
 VAR_7 = FUNC_7(&VAR_5);
 if (VAR_7 > 0) {




  if (VAR_7 == 1) {
   FUNC_11(&VAR_5);
   VAR_8 = FUNC_2(&VAR_4->_count, &VAR_9);
   while (VAR_8 != -1 && VAR_9 & VAR_2) {
    VAR_8 = FUNC_1(&VAR_4->_count, VAR_9, &VAR_9,
        VAR_9 & ~VAR_2);
    if (VAR_8 == 1) {
     VAR_8 = FUNC_6(VAR_3, 1);
     if (VAR_8 != 0)
      break;
    }
   }
   if (VAR_8 == -1)
    VAR_6 = VAR_0;
   else if (VAR_8 > 0) {
    VAR_6 = VAR_8;
   }
   FUNC_8(&VAR_5);
  }

  FUNC_9(&VAR_5, 1);
 }
 FUNC_10(&VAR_5);
 FUNC_11(&VAR_5);
 FUNC_4(&VAR_5);
 return (VAR_6);
}
