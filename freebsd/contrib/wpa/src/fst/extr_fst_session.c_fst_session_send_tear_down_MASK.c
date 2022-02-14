
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int td ;
struct fst_tear_down {int fsts_id; int action; } ;
struct TYPE_2__ {int fsts_id; int * new_iface; int * old_iface; } ;
struct fst_session {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fst_session*,int ,char*) ;
 int FUNC_2 (struct fst_session*,int ,int ,char*) ;
 int FUNC_3 (struct fst_session*) ;
 int FUNC_4 (struct fst_session*,int ,struct fst_tear_down*,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fst_tear_down*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct fst_session *VAR_4)
{
 struct fst_tear_down VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_4)) {
  FUNC_1(VAR_4, VAR_1, "No FST setup to tear down");
  return -1;
 }

 FUNC_0(VAR_4->data.old_iface != ((void*)0));
 FUNC_0(VAR_4->data.new_iface != ((void*)0));

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.action = VAR_0;
 VAR_5.fsts_id = FUNC_5(VAR_4->data.fsts_id);

 VAR_6 = FUNC_4(VAR_4, VAR_3, &VAR_5, sizeof(VAR_5), ((void*)0));
 if (!VAR_6)
  FUNC_2(VAR_4, VAR_3, VAR_2, "FST TearDown sent");
 else
  FUNC_2(VAR_4, VAR_3, VAR_1,
      "failed to send FST TearDown");

 return VAR_6;
}
