
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct packed_rrset_data {size_t count; int* rr_len; int ** rr_data; scalar_t__* rr_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,int ,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_3 (char**,size_t*,int ) ;
 scalar_t__ FUNC_4 (int **,size_t*,char**,size_t*,int *,int ) ;
 scalar_t__ FUNC_5 (int **,size_t*,char**,size_t*,int ,int *,int ) ;
 scalar_t__ FUNC_6 (char**,size_t*,int ) ;

__attribute__((used)) static int
FUNC_7(uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4, uint16_t VAR_5,
 struct packed_rrset_data* VAR_6, size_t VAR_7, char* VAR_8, size_t VAR_9)
{
 int VAR_10 = 0;
 size_t VAR_11 = VAR_9, VAR_12;
 uint8_t* VAR_13;
 if(VAR_7 >= VAR_6->count) VAR_4 = VAR_1;
 VAR_13 = VAR_2;
 VAR_12 = VAR_3;
 VAR_10 += FUNC_4(&VAR_13, &VAR_12, &VAR_8, &VAR_11, ((void*)0), 0);
 VAR_10 += FUNC_2(&VAR_8, &VAR_11, "\t");
 VAR_10 += FUNC_2(&VAR_8, &VAR_11, "%lu\t", (unsigned long)VAR_6->rr_ttl[VAR_7]);
 VAR_10 += FUNC_3(&VAR_8, &VAR_11, VAR_5);
 VAR_10 += FUNC_2(&VAR_8, &VAR_11, "\t");
 VAR_10 += FUNC_6(&VAR_8, &VAR_11, VAR_4);
 VAR_10 += FUNC_2(&VAR_8, &VAR_11, "\t");
 VAR_12 = VAR_6->rr_len[VAR_7]-2;
 VAR_13 = VAR_6->rr_data[VAR_7]+2;
 VAR_10 += FUNC_5(&VAR_13, &VAR_12, &VAR_8, &VAR_11, VAR_4, ((void*)0), 0);

 if(VAR_4 == VAR_0) {
  VAR_10 += FUNC_2(&VAR_8, &VAR_11, " ;{id = %u}",
   FUNC_1(VAR_6->rr_data[VAR_7]+2,
    VAR_6->rr_len[VAR_7]-2));
 }
 VAR_10 += FUNC_2(&VAR_8, &VAR_11, "\n");

 if(VAR_10 > (int)VAR_9) {
  FUNC_0(0, "RR too long to print", VAR_2, VAR_4, VAR_5);
  return 0;
 }
 return 1;
}
