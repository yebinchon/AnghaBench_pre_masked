
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* server_name; scalar_t__ reneg; int version_min; int version_out; } ;
struct TYPE_9__ {TYPE_2__ eng; } ;
typedef TYPE_1__ br_ssl_client_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__*,char const*,size_t) ;
 int FUNC_7 (char const*) ;

int
FUNC_8(br_ssl_client_context *VAR_4,
 const char *VAR_5, int VAR_6)
{
 size_t VAR_7;

 FUNC_5(&VAR_4->eng, ((void*)0), 0, 0);
 VAR_4->eng.version_out = VAR_4->eng.version_min;
 if (!VAR_6) {
  FUNC_0(VAR_4);
 }
 if (!FUNC_3(&VAR_4->eng)) {
  return 0;
 }







 VAR_4->eng.reneg = 0;

 if (VAR_5 == ((void*)0)) {
  VAR_4->eng.server_name[0] = 0;
 } else {
  VAR_7 = FUNC_7(VAR_5) + 1;
  if (VAR_7 > sizeof VAR_4->eng.server_name) {
   FUNC_1(&VAR_4->eng, VAR_0);
   return 0;
  }
  FUNC_6(VAR_4->eng.server_name, VAR_5, VAR_7);
 }

 FUNC_2(&VAR_4->eng,
  VAR_2, VAR_3);
 return FUNC_4(&VAR_4->eng) == VAR_1;
}
