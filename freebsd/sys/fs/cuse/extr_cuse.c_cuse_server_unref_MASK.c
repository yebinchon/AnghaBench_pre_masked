
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct cuse_server_dev {scalar_t__ refs; int cv; TYPE_1__ selinfo; int hmem; int hdev; } ;
struct cuse_server {scalar_t__ refs; int cv; TYPE_1__ selinfo; int hmem; int hdev; } ;
struct cuse_memory {scalar_t__ refs; int cv; TYPE_1__ selinfo; int hmem; int hdev; } ;


 int VAR_0 ;
 struct cuse_server_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cuse_server_dev*,int ) ;
 int FUNC_2 (struct cuse_server_dev*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cuse_server_dev*) ;
 int VAR_1 ;
 int FUNC_5 (struct cuse_server_dev*) ;
 int FUNC_6 (struct cuse_server_dev*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct cuse_server_dev*) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int FUNC_10 (struct cuse_server_dev*,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_14(struct cuse_server *VAR_3)
{
 struct cuse_server_dev *VAR_4;
 struct cuse_memory *VAR_5;

 FUNC_3();
 VAR_3->refs--;
 if (VAR_3->refs != 0) {
  FUNC_7();
  return;
 }
 FUNC_5(VAR_3);

 FUNC_6(VAR_3);

 FUNC_1(&VAR_1, VAR_3, VAR_2);

 while ((VAR_4 = FUNC_0(&VAR_3->hdev)) != ((void*)0)) {
  FUNC_1(&VAR_3->hdev, VAR_4, VAR_2);
  FUNC_7();
  FUNC_4(VAR_4);
  FUNC_3();
 }

 FUNC_2(VAR_3, -1);

 while ((VAR_5 = FUNC_0(&VAR_3->hmem)) != ((void*)0)) {
  FUNC_1(&VAR_3->hmem, VAR_5, VAR_2);
  FUNC_7();
  FUNC_8(VAR_5);
  FUNC_3();
 }

 FUNC_11(&VAR_3->selinfo.si_note, 1);
 FUNC_12(&VAR_3->selinfo.si_note);

 FUNC_7();

 FUNC_13(&VAR_3->selinfo);

 FUNC_9(&VAR_3->cv);

 FUNC_10(VAR_3, VAR_0);
}
