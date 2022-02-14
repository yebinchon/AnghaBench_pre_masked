
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct rrset_parse {scalar_t__ dname_len; scalar_t__ rr_count; int size; struct rr_parse* rr_last; int rr_first; int dname; } ;
struct rr_parse {scalar_t__ size; int next; } ;
typedef int socklen_t ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (scalar_t__,char const*,int *,struct sockaddr_storage*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char* VAR_3, sldns_buffer* VAR_4, struct rrset_parse* VAR_5,
 struct rr_parse* VAR_6, struct rr_parse** VAR_7, struct sockaddr_storage* VAR_8, socklen_t VAR_9)
{
 if(VAR_2 >= VAR_1 && VAR_5->dname_len <= VAR_0 && VAR_3) {
  uint8_t VAR_10[VAR_0+1];
  FUNC_0(VAR_4, VAR_10, VAR_5->dname);
  FUNC_1(VAR_1, VAR_3, VAR_10, VAR_8, VAR_9);
 }
 if(VAR_6)
  VAR_6->next = (*VAR_7)->next;
 else VAR_5->rr_first = (*VAR_7)->next;
 if(VAR_5->rr_last == *VAR_7)
  VAR_5->rr_last = VAR_6;
 VAR_5->rr_count --;
 VAR_5->size -= (*VAR_7)->size;


 return VAR_5->rr_count == 0;
}
