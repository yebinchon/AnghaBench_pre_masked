
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsd_sockmsg {int req_id; int tx_id; int len; int type; } ;
struct xs_dev_data {int lock; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct xs_dev_data*,char const*,int) ;

__attribute__((used)) static void
FUNC_6(struct xs_dev_data *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct xsd_sockmsg VAR_6;
 const char *VAR_7;

 VAR_6.type = VAR_1;
 VAR_6.req_id = VAR_4;
 VAR_6.tx_id = VAR_5;
 VAR_7 = ((void*)0);


 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_4(VAR_0);
 FUNC_0(VAR_7 != ((void*)0), ("Unable to find string for EINVAL errno"));

 VAR_6.len = FUNC_3(VAR_7) + 1;

 FUNC_1(&VAR_2->lock);
 FUNC_5(VAR_2, (char *)&VAR_6, sizeof(VAR_6));
 FUNC_5(VAR_2, VAR_7, VAR_6.len);
 FUNC_2(&VAR_2->lock);
}
