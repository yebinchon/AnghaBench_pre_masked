
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsd_sockmsg {size_t len; scalar_t__ tx_id; scalar_t__ req_id; int type; } ;
struct xs_watch {scalar_t__ callback_data; } ;
struct xs_dev_watch {char const* token; TYPE_1__* user; } ;
typedef int msg ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct xs_watch *VAR_4, const char **VAR_5, unsigned int VAR_6)
{
 struct xs_dev_watch *VAR_7;
 struct xsd_sockmsg VAR_8;
 char *VAR_9;

 VAR_7 = (struct xs_dev_watch *)VAR_4->callback_data;
 VAR_8.type = VAR_2;
 VAR_8.req_id = VAR_8.tx_id = 0;
 VAR_8.len = FUNC_5(VAR_5[VAR_3]) + FUNC_5(VAR_7->token) + 2;

 VAR_9 = FUNC_1(VAR_8.len, VAR_1, VAR_0);
 FUNC_4(VAR_9, VAR_5[VAR_3]);
 FUNC_4(&VAR_9[FUNC_5(VAR_5[VAR_3]) + 1], VAR_7->token);
 FUNC_2(&VAR_7->user->lock);
 FUNC_6(VAR_7->user, (char *)&VAR_8, sizeof(VAR_8));
 FUNC_6(VAR_7->user, VAR_9, VAR_8.len);
 FUNC_3(&VAR_7->user->lock);
 FUNC_0(VAR_9, VAR_1);
}
