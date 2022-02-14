
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adreq {scalar_t__ adr_datasize; scalar_t__ adr_seq; int adr_cmd; int adr_byteorder; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct adreq*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 struct adreq* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct adreq *VAR_18;
 unsigned int VAR_19;

 FUNC_6(&VAR_12);
 FUNC_4(&VAR_13);
 FUNC_2(&VAR_11);
 FUNC_0(&VAR_5);
 FUNC_4(&VAR_7);
 FUNC_2(&VAR_6);
 FUNC_0(&VAR_14);
 FUNC_4(&VAR_16);
 FUNC_2(&VAR_15);
 FUNC_0(&VAR_8);
 FUNC_4(&VAR_10);
 FUNC_2(&VAR_9);

 for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
  VAR_18 = FUNC_3(sizeof(*VAR_18) + VAR_0);
  if (VAR_18 == ((void*)0)) {
   FUNC_5(VAR_4,
       "Unable to allocate %zu bytes of memory for adreq object.",
       sizeof(*VAR_18) + VAR_0);
  }
  VAR_18->adr_byteorder = VAR_1;
  VAR_18->adr_cmd = VAR_2;
  VAR_18->adr_seq = 0;
  VAR_18->adr_datasize = 0;
  FUNC_1(&VAR_5, VAR_18, VAR_17);
 }
}
