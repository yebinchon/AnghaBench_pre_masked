
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {scalar_t__ sl; int fmt; int * shadbuf; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct snd_dbuf *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0), ("b is a null pointer"));
 FUNC_0(VAR_0->sl >= 0, ("illegal shadow length"));

 if ((VAR_0->shadbuf != ((void*)0)) && (VAR_0->sl > 0))
  FUNC_1(VAR_0->shadbuf, FUNC_2(VAR_0->fmt), VAR_0->sl);
}
