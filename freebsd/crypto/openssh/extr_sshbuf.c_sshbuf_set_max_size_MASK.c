
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {size_t max_size; int refcount; size_t size; size_t alloc; int * d; int * cd; scalar_t__ readonly; } ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *,size_t,size_t,int) ;
 int FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*,int) ;

int
FUNC_6(struct sshbuf *VAR_6, size_t VAR_7)
{
 size_t VAR_8;
 u_char *VAR_9;
 int VAR_10;

 FUNC_1(("set max buf = %p len = %zu", VAR_6, VAR_7));
 if ((VAR_10 = FUNC_4(VAR_6)) != 0)
  return VAR_10;
 if (VAR_7 == VAR_6->max_size)
  return 0;
 if (VAR_6->readonly || VAR_6->refcount > 1)
  return VAR_4;
 if (VAR_7 > VAR_2)
  return VAR_5;

 FUNC_5(VAR_6, VAR_7 < VAR_6->size);
 if (VAR_7 < VAR_6->alloc && VAR_7 > VAR_6->size) {
  if (VAR_6->size < VAR_1)
   VAR_8 = VAR_1;
  else
   VAR_8 = FUNC_0(VAR_6->size, VAR_0);
  if (VAR_8 > VAR_7)
   VAR_8 = VAR_7;
  FUNC_1(("new alloc = %zu", VAR_8));
  if ((VAR_9 = FUNC_3(VAR_6->d, VAR_6->alloc, VAR_8, 1)) == ((void*)0))
   return VAR_3;
  VAR_6->cd = VAR_6->d = VAR_9;
  VAR_6->alloc = VAR_8;
 }
 FUNC_2("new-max");
 if (VAR_7 < VAR_6->alloc)
  return VAR_5;
 VAR_6->max_size = VAR_7;
 return 0;
}
