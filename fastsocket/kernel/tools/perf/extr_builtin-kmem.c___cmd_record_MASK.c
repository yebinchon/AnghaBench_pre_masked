
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 char** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,char const**,int *) ;
 char* FUNC_3 (char const* const) ;

__attribute__((used)) static int FUNC_4(int VAR_1, const char **VAR_2)
{
 const char * const VAR_3[] = {
 "record", "-a", "-R", "-f", "-c", "1",
 "-e", "kmem:kmalloc",
 "-e", "kmem:kmalloc_node",
 "-e", "kmem:kfree",
 "-e", "kmem:kmem_cache_alloc",
 "-e", "kmem:kmem_cache_alloc_node",
 "-e", "kmem:kmem_cache_free",
 };
 unsigned int VAR_4, VAR_5, VAR_6;
 const char **VAR_7;

 VAR_4 = FUNC_0(VAR_3) + VAR_1 - 1;
 VAR_7 = FUNC_1(VAR_4 + 1, sizeof(char *));

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
  VAR_7[VAR_5] = FUNC_3(VAR_3[VAR_5]);

 for (VAR_6 = 1; VAR_6 < (unsigned int)VAR_1; VAR_6++, VAR_5++)
  VAR_7[VAR_5] = VAR_2[VAR_6];

 return FUNC_2(VAR_5, VAR_7, ((void*)0));
}
