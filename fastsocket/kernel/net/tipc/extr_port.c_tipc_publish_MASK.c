
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_name_seq {int upper; int lower; int type; } ;
struct publication {int pport_list; } ;
struct TYPE_2__ {int published; int ref; scalar_t__ connected; } ;
struct port {scalar_t__ pub_count; TYPE_1__ publ; int publications; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,struct port*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 struct publication* FUNC_2 (int ,int ,int ,unsigned int,int ,scalar_t__) ;
 struct port* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct port*) ;

int FUNC_5(u32 VAR_4, unsigned int VAR_5, struct tipc_name_seq const *VAR_6)
{
 struct port *VAR_7;
 struct publication *VAR_8;
 u32 VAR_9;
 int VAR_10 = -VAR_1;

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 FUNC_0("tipc_publ %u, p_ptr = %x, conn = %x, scope = %x, "
     "lower = %u, upper = %u\n",
     VAR_4, VAR_7, VAR_7->publ.connected, VAR_5, VAR_6->lower, VAR_6->upper);
 if (VAR_7->publ.connected)
  goto exit;
 if (VAR_6->lower > VAR_6->upper)
  goto exit;
 if ((VAR_5 < VAR_3) || (VAR_5 > VAR_2))
  goto exit;
 VAR_9 = VAR_4 + VAR_7->pub_count + 1;
 if (VAR_9 == VAR_4) {
  VAR_10 = -VAR_0;
  goto exit;
 }
 VAR_8 = FUNC_2(VAR_6->type, VAR_6->lower, VAR_6->upper,
        VAR_5, VAR_7->publ.ref, VAR_9);
 if (VAR_8) {
  FUNC_1(&VAR_8->pport_list, &VAR_7->publications);
  VAR_7->pub_count++;
  VAR_7->publ.published = 1;
  VAR_10 = 0;
 }
exit:
 FUNC_4(VAR_7);
 return VAR_10;
}
