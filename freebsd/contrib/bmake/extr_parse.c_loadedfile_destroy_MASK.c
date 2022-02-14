
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadedfile {scalar_t__ maplen; struct loadedfile* buf; } ;


 int FUNC_0 (struct loadedfile*) ;
 int FUNC_1 (struct loadedfile*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct loadedfile *VAR_0)
{
 if (VAR_0->buf != ((void*)0)) {
  if (VAR_0->maplen > 0) {



  } else {
   FUNC_0(VAR_0->buf);
  }
 }
 FUNC_0(VAR_0);
}
