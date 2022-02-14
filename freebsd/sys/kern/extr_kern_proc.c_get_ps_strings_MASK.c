
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
typedef int pss_string ;
typedef enum proc_vector_type { ____Placeholder_proc_vector_type } proc_vector_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (char**,int ) ;
 int FUNC_2 (struct thread*,struct proc*,char***,size_t*,int) ;
 int FUNC_3 (struct thread*,struct proc*,char*,char*,int) ;
 int FUNC_4 (struct sbuf*,char*,int) ;
 size_t FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_4, struct proc *VAR_5, struct sbuf *VAR_6,
    enum proc_vector_type VAR_7)
{
 size_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 char **VAR_14, *VAR_15;
 char VAR_16[VAR_1];

 FUNC_0(VAR_5);




 VAR_10 = 2 * (VAR_3 + VAR_0);

 VAR_12 = FUNC_2(VAR_4, VAR_5, &VAR_14, &VAR_11, VAR_7);
 if (VAR_12 != 0)
  return (VAR_12);
 for (VAR_8 = 0, VAR_13 = 0; VAR_13 < (int)VAR_11 && VAR_8 < VAR_10; VAR_13++) {





  if (VAR_14[VAR_13] == ((void*)0))
   break;
  for (VAR_15 = VAR_14[VAR_13]; ; VAR_15 += VAR_1) {
   VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_15, VAR_16,
       sizeof(VAR_16));
   if (VAR_12 != 0)
    goto done;
   VAR_9 = FUNC_5(VAR_16, VAR_1);
   if (VAR_8 + VAR_9 >= VAR_10)
    VAR_9 = VAR_10 - VAR_8 - 1;
   FUNC_4(VAR_6, VAR_16, VAR_9);
   if (VAR_9 != VAR_1)
    break;
   VAR_8 += VAR_1;
  }
  FUNC_4(VAR_6, "", 1);
  VAR_8 += VAR_9 + 1;
 }
done:
 FUNC_1(VAR_14, VAR_2);
 return (VAR_12);
}
