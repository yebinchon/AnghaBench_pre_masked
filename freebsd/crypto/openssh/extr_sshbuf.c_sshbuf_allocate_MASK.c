
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {size_t size; size_t max_size; size_t alloc; int * d; int * cd; } ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int * FUNC_3 (int *,size_t,size_t,int) ;
 int FUNC_4 (struct sshbuf*,size_t) ;
 int FUNC_5 (struct sshbuf*,int) ;

int
FUNC_6(struct sshbuf *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 u_char *VAR_6;
 int VAR_7;

 FUNC_1(("allocate buf = %p len = %zu", VAR_2, VAR_3));
 if ((VAR_7 = FUNC_4(VAR_2, VAR_3)) != 0)
  return VAR_7;




 FUNC_5(VAR_2, VAR_2->size + VAR_3 > VAR_2->max_size);
 FUNC_2("allocate");
 if (VAR_3 + VAR_2->size <= VAR_2->alloc)
  return 0;





 VAR_5 = VAR_3 + VAR_2->size - VAR_2->alloc;
 VAR_4 = FUNC_0(VAR_2->alloc + VAR_5, VAR_0);
 FUNC_1(("need %zu initial rlen %zu", VAR_5, VAR_4));
 if (VAR_4 > VAR_2->max_size)
  VAR_4 = VAR_2->alloc + VAR_5;
 FUNC_1(("adjusted rlen %zu", VAR_4));
 if ((VAR_6 = FUNC_3(VAR_2->d, VAR_2->alloc, VAR_4, 1)) == ((void*)0)) {
  FUNC_1(("realloc fail"));
  return VAR_1;
 }
 VAR_2->alloc = VAR_4;
 VAR_2->cd = VAR_2->d = VAR_6;
 if ((VAR_7 = FUNC_4(VAR_2, VAR_3)) < 0) {

  return VAR_7;
 }
 FUNC_2("done");
 return 0;
}
