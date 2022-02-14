
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sip_header {int len; int clen; unsigned int (* match_len ) (struct nf_conn const*,char const*,char const*,int*) ;int slen; scalar_t__ search; scalar_t__ cname; scalar_t__ name; } ;
struct nf_conn {int dummy; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;


 struct sip_header* VAR_0 ;
 char* FUNC_0 (char const*,char const*,scalar_t__,int ) ;
 int FUNC_1 (char const) ;
 char* FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__,int) ;
 unsigned int FUNC_4 (struct nf_conn const*,char const*,char const*,int*) ;

int FUNC_5(const struct nf_conn *VAR_1, const char *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        enum sip_header_types VAR_5,
        unsigned int *VAR_6, unsigned int *VAR_7)
{
 const struct sip_header *VAR_8 = &VAR_0[VAR_5];
 const char *VAR_9 = VAR_2, *VAR_10 = VAR_2 + VAR_4;
 int VAR_11 = 0;

 for (VAR_2 += VAR_3; VAR_2 < VAR_10; VAR_2++) {

  if (*VAR_2 != '\r' && *VAR_2 != '\n')
   continue;
  if (++VAR_2 >= VAR_10)
   break;
  if (*(VAR_2 - 1) == '\r' && *VAR_2 == '\n') {
   if (++VAR_2 >= VAR_10)
    break;
  }


  if (*VAR_2 == ' ' || *VAR_2 == '\t')
   continue;



  if (VAR_10 - VAR_2 >= VAR_8->len &&
      FUNC_3(VAR_2, VAR_8->name, VAR_8->len) == 0)
   VAR_2 += VAR_8->len;
  else if (VAR_8->cname && VAR_10 - VAR_2 >= VAR_8->clen + 1 &&
    FUNC_3(VAR_2, VAR_8->cname, VAR_8->clen) == 0 &&
    !FUNC_1(*(VAR_2 + VAR_8->clen + 1)))
   VAR_2 += VAR_8->clen;
  else
   continue;


  VAR_2 = FUNC_2(VAR_2, VAR_10);
  if (VAR_2 == ((void*)0))
   break;
  if (*VAR_2 != ':' || ++VAR_2 >= VAR_10)
   break;


  VAR_2 = FUNC_2(VAR_2, VAR_10);
  if (VAR_2 == ((void*)0))
   break;

  *VAR_6 = VAR_2 - VAR_9;
  if (VAR_8->search) {
   VAR_2 = FUNC_0(VAR_2, VAR_10, VAR_8->search,
          VAR_8->slen);
   if (!VAR_2)
    return -1;
   VAR_2 += VAR_8->slen;
  }

  *VAR_7 = VAR_8->match_len(VAR_1, VAR_2, VAR_10, &VAR_11);
  if (!*VAR_7)
   return -1;
  *VAR_6 = VAR_2 - VAR_9 + VAR_11;
  return 1;
 }
 return 0;
}
