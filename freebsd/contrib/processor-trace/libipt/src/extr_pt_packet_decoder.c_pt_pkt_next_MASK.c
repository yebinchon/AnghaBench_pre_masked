
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int pos; int config; } ;
struct pt_packet {int dummy; } ;
struct pt_decoder_function {int (* packet ) (struct pt_packet_decoder*,struct pt_packet*) ;} ;
typedef int pkt ;


 int FUNC_0 (struct pt_packet*,size_t,struct pt_packet*) ;
 int FUNC_1 (struct pt_decoder_function const**,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pt_packet_decoder*,struct pt_packet*) ;

int FUNC_3(struct pt_packet_decoder *VAR_2, struct pt_packet *VAR_3,
  size_t VAR_4)
{
 const struct pt_decoder_function *VAR_5;
 struct pt_packet VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_3 || !VAR_2)
  return -VAR_1;

 VAR_7 = VAR_4 == sizeof(VAR_6) ? VAR_3 : &VAR_6;

 VAR_8 = FUNC_1(&VAR_5, VAR_2->pos, &VAR_2->config);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_5)
  return -VAR_0;

 if (!VAR_5->packet)
  return -VAR_0;

 VAR_9 = VAR_5->packet(VAR_2, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_2->pos += VAR_9;

 return VAR_9;
}
