
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_dirstream {int * buf; scalar_t__ fid_fragment; int * bp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct udf_dirstream*) ;

__attribute__((used)) static void
FUNC_3(struct udf_dirstream *VAR_2)
{

 if (VAR_2->bp != ((void*)0))
  FUNC_0(VAR_2->bp);

 if (VAR_2->fid_fragment && VAR_2->buf != ((void*)0))
  FUNC_1(VAR_2->buf, VAR_0);

 FUNC_2(VAR_1, VAR_2);
}
