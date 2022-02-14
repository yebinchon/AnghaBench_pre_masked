
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_type; int dq_id; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dquot*) ;
 int FUNC_4 (struct dquot*) ;

__attribute__((used)) static int FUNC_5(struct dquot *VAR_0)
{
 int VAR_1;

 FUNC_0("id=%u, type=%d\n", VAR_0->dq_id, VAR_0->dq_type);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_1);
  goto out_err;
 }


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_1);
  goto out_err;
 }
 FUNC_2(0);
 return 0;
out_err:
 FUNC_2(VAR_1);
 return VAR_1;
}
