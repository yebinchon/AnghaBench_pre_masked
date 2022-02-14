
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct meminfo {size_t mi_size; int mi_stack; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (void*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3, size_t VAR_4)
{




 FUNC_0(VAR_3 != ((void*)0), ("p=NULL"));
 FUNC_0(VAR_4 > 0, ("size=0"));
 FUNC_3(&VAR_1);
 FUNC_0(VAR_2 >= VAR_4, ("Freeing too much?"));
 VAR_2 -= VAR_4;
 FUNC_4(&VAR_1);
 FUNC_1(VAR_3, VAR_0);
}
