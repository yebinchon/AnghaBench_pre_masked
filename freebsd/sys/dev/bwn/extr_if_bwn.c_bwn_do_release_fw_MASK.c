
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_fwfile {int * filename; int * fw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bwn_fwfile *VAR_1)
{

 if (VAR_1->fw != ((void*)0))
  FUNC_0(VAR_1->fw, VAR_0);
 VAR_1->fw = ((void*)0);
 VAR_1->filename = ((void*)0);
}
