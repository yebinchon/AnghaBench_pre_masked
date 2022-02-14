
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct sk_buff {int dummy; } ;
struct rtable {unsigned char rt_spec_dst; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {unsigned char* __data; int optlen; int is_changed; int srr; unsigned char faddr; int is_strictroute; int rr; int rr_needaddr; int ts; int ts_needtime; int ts_needaddr; int router_alert; int cipso; } ;
typedef unsigned char __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,unsigned char**) ;
 int FUNC_2 (struct timespec*) ;
 unsigned char FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,int ,int ,unsigned char) ;
 int FUNC_5 (struct net*,unsigned char) ;
 int * FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 struct rtable* FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct net *VAR_6,
         struct ip_options * VAR_7, struct sk_buff * VAR_8)
{
 int VAR_9;
 unsigned char * VAR_10;
 unsigned char * VAR_11;
 int VAR_12;
 unsigned char * VAR_13 = ((void*)0);
 struct rtable *VAR_14 = ((void*)0);

 if (VAR_8 != ((void*)0)) {
  VAR_14 = FUNC_9(VAR_8);
  VAR_11 = (unsigned char *)&(FUNC_6(VAR_8)[1]);
 } else
  VAR_11 = VAR_7->__data;
 VAR_10 = VAR_11 - sizeof(struct iphdr);

 for (VAR_9 = VAR_7->optlen; VAR_9 > 0; ) {
  switch (*VAR_11) {
        case 139:
   for (VAR_11++, VAR_9--; VAR_9>0; VAR_11++, VAR_9--) {
    if (*VAR_11 != 139) {
     *VAR_11 = 139;
     VAR_7->is_changed = 1;
    }
   }
   goto eol;
        case 137:
   VAR_9--;
   VAR_11++;
   continue;
  }
  VAR_12 = VAR_11[1];
  if (VAR_12<2 || VAR_12>VAR_9) {
   VAR_13 = VAR_11;
   goto error;
  }
  switch (*VAR_11) {
        case 132:
        case 138:
   if (VAR_12 < 3) {
    VAR_13 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] < 4) {
    VAR_13 = VAR_11 + 2;
    goto error;
   }

   if (VAR_7->srr) {
    VAR_13 = VAR_11;
    goto error;
   }
   if (!VAR_8) {
    if (VAR_11[2] != 4 || VAR_12 < 7 || ((VAR_12-3) & 3)) {
     VAR_13 = VAR_11 + 1;
     goto error;
    }
    FUNC_7(&VAR_7->faddr, &VAR_11[3], 4);
    if (VAR_12 > 7)
     FUNC_8(&VAR_11[3], &VAR_11[7], VAR_12-7);
   }
   VAR_7->is_strictroute = (VAR_11[0] == 132);
   VAR_7->srr = VAR_11 - VAR_10;
   break;
        case 135:
   if (VAR_7->rr) {
    VAR_13 = VAR_11;
    goto error;
   }
   if (VAR_12 < 3) {
    VAR_13 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] < 4) {
    VAR_13 = VAR_11 + 2;
    goto error;
   }
   if (VAR_11[2] <= VAR_12) {
    if (VAR_11[2]+3 > VAR_12) {
     VAR_13 = VAR_11 + 2;
     goto error;
    }
    if (VAR_8) {
     FUNC_7(&VAR_11[VAR_11[2]-1], &VAR_14->rt_spec_dst, 4);
     VAR_7->is_changed = 1;
    }
    VAR_11[2] += 4;
    VAR_7->rr_needaddr = 1;
   }
   VAR_7->rr = VAR_11 - VAR_10;
   break;
        case 131:
   if (VAR_7->ts) {
    VAR_13 = VAR_11;
    goto error;
   }
   if (VAR_12 < 4) {
    VAR_13 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] < 5) {
    VAR_13 = VAR_11 + 2;
    goto error;
   }
   if (VAR_11[2] <= VAR_12) {
    __be32 *VAR_15 = ((void*)0);
    if (VAR_11[2]+3 > VAR_11[1]) {
     VAR_13 = VAR_11 + 2;
     goto error;
    }
    switch (VAR_11[3]&0xF) {
          case 128:
     VAR_7->ts = VAR_11 - VAR_10;
     if (VAR_8)
      VAR_15 = (__be32*)&VAR_11[VAR_11[2]-1];
     VAR_7->ts_needtime = 1;
     VAR_11[2] += 4;
     break;
          case 129:
     if (VAR_11[2]+7 > VAR_11[1]) {
      VAR_13 = VAR_11 + 2;
      goto error;
     }
     VAR_7->ts = VAR_11 - VAR_10;
     if (VAR_8) {
      FUNC_7(&VAR_11[VAR_11[2]-1], &VAR_14->rt_spec_dst, 4);
      VAR_15 = (__be32*)&VAR_11[VAR_11[2]+3];
     }
     VAR_7->ts_needaddr = 1;
     VAR_7->ts_needtime = 1;
     VAR_11[2] += 8;
     break;
          case 130:
     if (VAR_11[2]+7 > VAR_11[1]) {
      VAR_13 = VAR_11 + 2;
      goto error;
     }
     VAR_7->ts = VAR_11 - VAR_10;
     {
      __be32 VAR_16;
      FUNC_7(&VAR_16, &VAR_11[VAR_11[2]-1], 4);
      if (FUNC_5(VAR_6, VAR_16) == VAR_5)
       break;
      if (VAR_8)
       VAR_15 = (__be32*)&VAR_11[VAR_11[2]+3];
     }
     VAR_7->ts_needtime = 1;
     VAR_11[2] += 8;
     break;
          default:
     if (!VAR_8 && !FUNC_0(VAR_0)) {
      VAR_13 = VAR_11 + 3;
      goto error;
     }
     break;
    }
    if (VAR_15) {
     struct timespec VAR_17;
     __be32 VAR_18;
     FUNC_2(&VAR_17);
     VAR_18 = FUNC_3((VAR_17.tv_sec % 86400) * VAR_3 + VAR_17.tv_nsec / VAR_4);
     FUNC_7(VAR_15, &VAR_18, sizeof(__be32));
     VAR_7->is_changed = 1;
    }
   } else {
    unsigned VAR_19 = VAR_11[3]>>4;
    if (VAR_19 == 15) {
     VAR_13 = VAR_11 + 3;
     goto error;
    }
    VAR_7->ts = VAR_11 - VAR_10;
    if (VAR_8) {
     VAR_11[3] = (VAR_11[3]&0xF)|((VAR_19+1)<<4);
     VAR_7->is_changed = 1;
    }
   }
   break;
        case 136:
   if (VAR_12 < 4) {
    VAR_13 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] == 0 && VAR_11[3] == 0)
    VAR_7->router_alert = VAR_11 - VAR_10;
   break;
        case 140:
   if ((!VAR_8 && !FUNC_0(VAR_0)) || VAR_7->cipso) {
    VAR_13 = VAR_11;
    goto error;
   }
   VAR_7->cipso = VAR_11 - VAR_10;
   if (FUNC_1(VAR_8, &VAR_11)) {
    VAR_13 = VAR_11;
    goto error;
   }
   break;
        case 134:
        case 133:
        default:
   if (!VAR_8 && !FUNC_0(VAR_0)) {
    VAR_13 = VAR_11;
    goto error;
   }
   break;
  }
  VAR_9 -= VAR_12;
  VAR_11 += VAR_12;
 }

eol:
 if (!VAR_13)
  return 0;

error:
 if (VAR_8) {
  FUNC_4(VAR_8, VAR_2, 0, FUNC_3((VAR_13-VAR_10)<<24));
 }
 return -VAR_1;
}
