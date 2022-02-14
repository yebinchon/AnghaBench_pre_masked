
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_ratelimit_query; int if_snd_tag_free; int if_snd_tag_query; int if_snd_tag_modify; int if_snd_tag_alloc; int if_get_counter; int if_transmit; int if_qflush; int if_resolvemulti; int if_ioctl; int if_start; int if_input; int if_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_0(struct ifnet *VAR_13)
{

 VAR_13->if_output = VAR_3;
 VAR_13->if_input = VAR_1;
 VAR_13->if_start = VAR_11;
 VAR_13->if_ioctl = VAR_2;
 VAR_13->if_resolvemulti = VAR_6;
 VAR_13->if_qflush = VAR_4;
 VAR_13->if_transmit = VAR_12;
 VAR_13->if_get_counter = VAR_0;
 VAR_13->if_snd_tag_alloc = VAR_7;
 VAR_13->if_snd_tag_modify = VAR_9;
 VAR_13->if_snd_tag_query = VAR_10;
 VAR_13->if_snd_tag_free = VAR_8;
 VAR_13->if_ratelimit_query = VAR_5;
}
