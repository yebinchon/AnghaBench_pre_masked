
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_unknown {struct packet_fixture* priv; } ;
struct pt_config {scalar_t__ begin; scalar_t__ end; } ;
struct packet_fixture {scalar_t__ buffer; int unknown; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pt_packet_unknown *VAR_1,
          const struct pt_config *VAR_2,
          const uint8_t *VAR_3, void *VAR_4)
{
 struct packet_fixture *VAR_5;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = (struct packet_fixture *) VAR_4;
 if (!VAR_5)
  return -VAR_0;

 if (VAR_2->begin != VAR_5->buffer)
  return -VAR_0;

 if (VAR_2->end != VAR_5->buffer + sizeof(VAR_5->buffer))
  return -VAR_0;

 if (VAR_3 != VAR_5->buffer)
  return -VAR_0;

 VAR_1->priv = VAR_5;

 return VAR_5->unknown;
}
