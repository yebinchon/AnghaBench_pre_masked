
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sip_header {int len; unsigned int (* match_len ) (struct nf_conn const*,char const*,char const*,int*) ;int slen; scalar_t__ search; int name; } ;
struct nf_conn {int dummy; } ;
typedef enum sdp_header_types { ____Placeholder_sdp_header_types } sdp_header_types ;


 int VAR_0 ;
 struct sip_header* VAR_1 ;
 char* FUNC_0 (char const*,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (char const*,int ,int) ;
 unsigned int FUNC_2 (struct nf_conn const*,char const*,char const*,int*) ;

int FUNC_3(const struct nf_conn *VAR_2, const char *VAR_3,
     unsigned int VAR_4, unsigned int VAR_5,
     enum sdp_header_types VAR_6,
     enum sdp_header_types VAR_7,
     unsigned int *VAR_8, unsigned int *VAR_9)
{
 const struct sip_header *VAR_10 = &VAR_1[VAR_6];
 const struct sip_header *VAR_11 = &VAR_1[VAR_7];
 const char *VAR_12 = VAR_3, *VAR_13 = VAR_3 + VAR_5;
 int VAR_14 = 0;

 for (VAR_3 += VAR_4; VAR_3 < VAR_13; VAR_3++) {

  if (*VAR_3 != '\r' && *VAR_3 != '\n')
   continue;
  if (++VAR_3 >= VAR_13)
   break;
  if (*(VAR_3 - 1) == '\r' && *VAR_3 == '\n') {
   if (++VAR_3 >= VAR_13)
    break;
  }

  if (VAR_7 != VAR_0 &&
      VAR_13 - VAR_3 >= VAR_11->len &&
      FUNC_1(VAR_3, VAR_11->name, VAR_11->len) == 0)
   break;
  else if (VAR_13 - VAR_3 >= VAR_10->len &&
    FUNC_1(VAR_3, VAR_10->name, VAR_10->len) == 0)
   VAR_3 += VAR_10->len;
  else
   continue;

  *VAR_8 = VAR_3 - VAR_12;
  if (VAR_10->search) {
   VAR_3 = FUNC_0(VAR_3, VAR_13, VAR_10->search,
          VAR_10->slen);
   if (!VAR_3)
    return -1;
   VAR_3 += VAR_10->slen;
  }

  *VAR_9 = VAR_10->match_len(VAR_2, VAR_3, VAR_13, &VAR_14);
  if (!*VAR_9)
   return -1;
  *VAR_8 = VAR_3 - VAR_12 + VAR_14;
  return 1;
 }
 return 0;
}
