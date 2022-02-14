
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_ie_epref {int epref; } ;
struct ccparty {size_t state; } ;
struct ccconn {int user; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 struct ccparty* FUNC_0 (struct ccconn*,int ) ;
 int FUNC_1 (struct ccparty*,char*,int ,...) ;
 int FUNC_2 (struct ccparty*,int ) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct ccconn *VAR_6, const struct uni_ie_epref *VAR_7)
{
 struct ccparty *VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_7->epref);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_8, "no party for %s",
      VAR_4[VAR_0]);
 }
 if (VAR_8->state != VAR_2) {
  FUNC_1(VAR_8, "bad state=%s for signal=%s",
      VAR_5[VAR_8->state],
      VAR_4[VAR_0]);
  return;
 }
 FUNC_2(VAR_8, VAR_1);
 FUNC_3(VAR_6->user, VAR_3,
     ((void*)0), VAR_7->epref);
}
