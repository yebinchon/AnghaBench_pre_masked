
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
typedef int socklen_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_class ;
struct TYPE_11__ {scalar_t__ _axfr_soa_count; int _socket; int * _nameservers; } ;
typedef TYPE_1__ ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;
typedef int ldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_storage*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__,scalar_t__,int,int ,int *) ;
 struct sockaddr_storage* FUNC_8 (int ,int ,size_t*) ;
 struct sockaddr_storage* FUNC_9 (scalar_t__,int ,size_t*) ;
 int FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 size_t FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (struct sockaddr_storage*,int ,struct sockaddr_storage*,int ,int ) ;
 scalar_t__ FUNC_20 (int *,int ,struct sockaddr_storage*,int ) ;

ldns_status
FUNC_21(ldns_resolver *VAR_13, const ldns_rdf *VAR_14, ldns_rr_class VAR_15)
{
        ldns_pkt *VAR_16;
        ldns_buffer *VAR_17;

        struct sockaddr_storage *VAR_18 = ((void*)0);
        size_t VAR_19 = 0;
        struct sockaddr_storage *VAR_20 = ((void*)0);
        size_t VAR_21 = 0;
        size_t VAR_22;
        ldns_status VAR_23;

        if (!VAR_13 || FUNC_12(VAR_13) < 1) {
                return VAR_8;
        }

        VAR_16 = FUNC_6(FUNC_10(VAR_14), VAR_5, VAR_15, 0);

        if (!VAR_16) {
                return VAR_6;
        }
 if(FUNC_14(VAR_13)) {
  VAR_18 = FUNC_9(
    FUNC_14(VAR_13), 0, &VAR_19);
 }



        for (VAR_22 = 0;
             VAR_22 < FUNC_12(VAR_13) &&
             VAR_13->_socket == VAR_12;
             VAR_22++) {
  if (VAR_20 != ((void*)0)) {
   FUNC_0(VAR_20);
  }
         VAR_20 = FUNC_8(
          VAR_13->_nameservers[VAR_22],
   FUNC_13(VAR_13), &VAR_21);

  if ((VAR_20->ss_family == VAR_0) &&
   (FUNC_11(VAR_13) == VAR_4)) {

   FUNC_0(VAR_20);
   VAR_20 = ((void*)0);
   continue;
  }

  if ((VAR_20->ss_family == VAR_1) &&
    (FUNC_11(VAR_13) == VAR_3)) {

   FUNC_0(VAR_20);
   VAR_20 = ((void*)0);
   continue;
  }


  VAR_13->_socket = FUNC_19(
    VAR_20, (socklen_t)VAR_21,
    VAR_18, (socklen_t)VAR_19,
    FUNC_15(VAR_13));
 }

 if (VAR_13->_socket == VAR_12) {
  FUNC_5(VAR_16);
  FUNC_0(VAR_20);
  return VAR_10;
 }
        VAR_17 = FUNC_3(VAR_2);
        if(!VAR_17) {
                FUNC_5(VAR_16);
                FUNC_0(VAR_20);

  FUNC_1(VAR_13->_socket);

                return VAR_9;
        }
        VAR_23 = FUNC_4(VAR_17, VAR_16);
        if (VAR_23 != VAR_11) {
                FUNC_5(VAR_16);
  FUNC_2(VAR_17);
                FUNC_0(VAR_20);



  FUNC_1(VAR_13->_socket);
  VAR_13->_socket = 0;

                return VAR_23;
        }

        if (FUNC_20(VAR_17, VAR_13->_socket, VAR_20,
    (socklen_t)VAR_21) == 0) {
                FUNC_5(VAR_16);
                FUNC_2(VAR_17);
                FUNC_0(VAR_20);





  FUNC_1(VAR_13->_socket);

                return VAR_10;
        }

        FUNC_5(VAR_16);
        FUNC_2(VAR_17);
        FUNC_0(VAR_20);




        VAR_13->_axfr_soa_count = 0;
        return VAR_11;
}
