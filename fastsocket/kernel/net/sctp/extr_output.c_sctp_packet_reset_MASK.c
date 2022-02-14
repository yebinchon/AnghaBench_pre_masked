
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_packet {int * auth; scalar_t__ ipfragok; scalar_t__ has_auth; scalar_t__ has_data; scalar_t__ has_sack; scalar_t__ has_cookie_echo; int overhead; int size; } ;



__attribute__((used)) static void FUNC_0(struct sctp_packet *VAR_0)
{
 VAR_0->size = VAR_0->overhead;
 VAR_0->has_cookie_echo = 0;
 VAR_0->has_sack = 0;
 VAR_0->has_data = 0;
 VAR_0->has_auth = 0;
 VAR_0->ipfragok = 0;
 VAR_0->auth = ((void*)0);
}
