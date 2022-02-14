
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_11__ {unsigned short source_port; unsigned short dest_port; void* checksum; void* length; } ;
struct TYPE_10__ {unsigned short source_port; unsigned short dest_port; int hdr_length; unsigned char control; void* urg; void* checksum; void* window; void* ack_num; void* seq_num; } ;
struct TYPE_9__ {int type; int code; void* unused; void* checksum; } ;
struct TYPE_12__ {TYPE_3__ udp; TYPE_2__ tcp; TYPE_1__ icmp; } ;
struct TYPE_15__ {int ver_hdrlen; int tos; int flags; int ttl; unsigned char protocol; int dest_addr; int src_addr; void* hdr_checksum; void* fragment; void* identification; void* packet_length; } ;
struct TYPE_16__ {TYPE_4__ p; TYPE_7__ hdr; } ;
struct TYPE_13__ {size_t recorded_length; size_t full_length; int micro_seconds; int seconds; } ;
struct swrap_packet {TYPE_8__ ip; TYPE_5__ frame; } ;
struct TYPE_14__ {int s_addr; } ;
struct sockaddr_in {unsigned short sin_port; TYPE_6__ sin_addr; } ;




 void* FUNC_0 (unsigned long) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static struct swrap_packet *FUNC_4(struct timeval *VAR_0,
           const struct sockaddr_in *VAR_1,
           const struct sockaddr_in *VAR_2,
           int VAR_3,
           const unsigned char *VAR_4,
           size_t VAR_5,
           unsigned long VAR_6,
           unsigned long VAR_7,
           unsigned char VAR_8,
           int VAR_9,
           size_t *VAR_10)
{
 struct swrap_packet *VAR_11;
 struct swrap_packet *VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 size_t VAR_15 = sizeof(VAR_12->frame);
 size_t VAR_16 = 0;
 size_t VAR_17 = 0;
 size_t VAR_18 = 0;
 size_t VAR_19 = 0;
 unsigned char VAR_20 = 0, VAR_21 = 0;
 unsigned short VAR_22 = VAR_1->sin_port;
 unsigned short VAR_23 = VAR_2->sin_port;

 switch (VAR_3) {
 case 128:
  VAR_20 = 0x06;
  VAR_16 = sizeof(VAR_12->ip.hdr) + sizeof(VAR_12->ip.p.tcp);
  VAR_17 = VAR_16 + VAR_5;
  break;

 case 129:
  VAR_20 = 0x11;
  VAR_16 = sizeof(VAR_12->ip.hdr) + sizeof(VAR_12->ip.p.udp);
  VAR_17 = VAR_16 + VAR_5;
  break;
 }

 if (VAR_9) {
  VAR_21 = VAR_20;
  VAR_20 = 0x01;
  if (VAR_17 > 64 ) {
   VAR_19 = VAR_17 - 64;
  }
  VAR_18 = sizeof(VAR_12->ip.hdr) + sizeof(VAR_12->ip.p.icmp);
  VAR_16 += VAR_18;
  VAR_17 += VAR_18;
 }

 VAR_13 = VAR_15 + VAR_17;
 VAR_14 = VAR_13;
 if (VAR_14 < sizeof(struct swrap_packet)) {
  VAR_14 = sizeof(struct swrap_packet);
 }
 VAR_11 = (struct swrap_packet *)FUNC_2(VAR_14);
 if (!VAR_11) return ((void*)0);

 VAR_12 = VAR_11;

 VAR_12->frame.seconds = VAR_0->tv_sec;
 VAR_12->frame.micro_seconds = VAR_0->tv_usec;
 VAR_12->frame.recorded_length = VAR_17 - VAR_19;
 VAR_12->frame.full_length = VAR_17 - VAR_19;

 VAR_12->ip.hdr.ver_hdrlen = 0x45;
 VAR_12->ip.hdr.tos = 0x00;
 VAR_12->ip.hdr.packet_length = FUNC_1(VAR_17 - VAR_19);
 VAR_12->ip.hdr.identification = FUNC_1(0xFFFF);
 VAR_12->ip.hdr.flags = 0x40;
 VAR_12->ip.hdr.fragment = FUNC_1(0x0000);
 VAR_12->ip.hdr.ttl = 0xFF;
 VAR_12->ip.hdr.protocol = VAR_20;
 VAR_12->ip.hdr.hdr_checksum = FUNC_1(0x0000);
 VAR_12->ip.hdr.src_addr = VAR_1->sin_addr.s_addr;
 VAR_12->ip.hdr.dest_addr = VAR_2->sin_addr.s_addr;

 if (VAR_9) {
  VAR_12->ip.p.icmp.type = 0x03;
  VAR_12->ip.p.icmp.code = 0x01;
  VAR_12->ip.p.icmp.checksum = FUNC_1(0x0000);
  VAR_12->ip.p.icmp.unused = FUNC_0(0x00000000);


  VAR_12 = (struct swrap_packet *)(((unsigned char *)VAR_11) + VAR_18);
  VAR_12->ip.hdr.ver_hdrlen = 0x45;
  VAR_12->ip.hdr.tos = 0x00;
  VAR_12->ip.hdr.packet_length = FUNC_1(VAR_17 - VAR_18);
  VAR_12->ip.hdr.identification = FUNC_1(0xFFFF);
  VAR_12->ip.hdr.flags = 0x40;
  VAR_12->ip.hdr.fragment = FUNC_1(0x0000);
  VAR_12->ip.hdr.ttl = 0xFF;
  VAR_12->ip.hdr.protocol = VAR_21;
  VAR_12->ip.hdr.hdr_checksum = FUNC_1(0x0000);
  VAR_12->ip.hdr.src_addr = VAR_2->sin_addr.s_addr;
  VAR_12->ip.hdr.dest_addr = VAR_1->sin_addr.s_addr;

  VAR_22 = VAR_2->sin_port;
  VAR_23 = VAR_1->sin_port;
 }

 switch (VAR_3) {
 case 128:
  VAR_12->ip.p.tcp.source_port = VAR_22;
  VAR_12->ip.p.tcp.dest_port = VAR_23;
  VAR_12->ip.p.tcp.seq_num = FUNC_0(VAR_6);
  VAR_12->ip.p.tcp.ack_num = FUNC_0(VAR_7);
  VAR_12->ip.p.tcp.hdr_length = 0x50;
  VAR_12->ip.p.tcp.control = VAR_8;
  VAR_12->ip.p.tcp.window = FUNC_1(0x7FFF);
  VAR_12->ip.p.tcp.checksum = FUNC_1(0x0000);
  VAR_12->ip.p.tcp.urg = FUNC_1(0x0000);

  break;

 case 129:
  VAR_12->ip.p.udp.source_port = VAR_1->sin_port;
  VAR_12->ip.p.udp.dest_port = VAR_2->sin_port;
  VAR_12->ip.p.udp.length = FUNC_1(8 + VAR_5);
  VAR_12->ip.p.udp.checksum = FUNC_1(0x0000);

  break;
 }

 if (VAR_4 && VAR_5 > 0) {
  unsigned char *VAR_24 = (unsigned char *)VAR_11;
  VAR_24 += VAR_15;
  VAR_24 += VAR_16;
  FUNC_3(VAR_24, VAR_4, VAR_5);
 }

 *VAR_10 = VAR_13 - VAR_19;
 return VAR_11;
}
